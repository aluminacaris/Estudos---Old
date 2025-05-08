import mysql.connector
import streamlit as st

# Configuração do Banco de Dados
def create_connection():
    return mysql.connector.connect(
        host="localhost",
        user="root",  # Modifique conforme sua configuração
        password="",  # Modifique conforme sua configuração
        database="escola"
    )

# Classe Aluno
class Aluno:
    def __init__(self, cpf, nome, sexo):
        self.cpf = cpf
        self.nome = nome
        self.sexo = sexo

    def inserir_no_banco(self):
        conn = create_connection()
        cursor = conn.cursor()
        sql = "INSERT INTO alunos (cpf, nome, sexo) VALUES (%s, %s, %s)"
        valores = (self.cpf, self.nome, self.sexo)
        cursor.execute(sql, valores)
        conn.commit()
        conn.close()

# Interface com Streamlit
st.title("Cadastro de Alunos")
cpf = st.text_input("CPF")
nome = st.text_input("Nome")
sexo = st.selectbox("Sexo", ["Masculino", "Feminino", "Outro"])

if st.button("Cadastrar"):
    aluno = Aluno(cpf, nome, sexo)
    aluno.inserir_no_banco()
    st.success("Aluno cadastrado com sucesso!")
