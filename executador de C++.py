import os

nome  = ''
agora = ''
base  = ''
prog  = ''

# arrumar
def arrumar():
    base = open(nome, 'r')
    prog = open('a.cpp', 'w')
    prog.write(base.read())
    base.close()
    prog.close()

# Função para compilar
def compilar():
    os.system(f"g++ a.cpp")

# Função para executar
def executar():
    os.system(f"./a.out")

# Limpar terminal
def limpar():
    os.system("clear")


while agora != 'a':
    # limpar terminal
    limpar()

    # Receber o nome
    nome = input("qual o nome: ").replace('\'', '')
    agora = ''

    while agora == '':
        # Arrumar para compilar
        arrumar()

        # Limpar terminal
        limpar()

        # Compilar
        compilar()

        # Executar
        executar()

        # Executar de novo ou receber nome de novo
        agora = input('\n-> ')
