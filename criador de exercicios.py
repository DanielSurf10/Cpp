n = 0

while True:
    try:
        open(f"Cpp/Exercícios/URI Online Judge/iniciante/Ex. {'' if n >= 10 else '0'}{n}.cpp", 'x').close()
        break
    except:
        n += 1
        continue
