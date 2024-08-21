while True:
    try:
        op = input()
        if op == "esquerda":
            print("ingles")
        elif op == "direita":
            print("frances")
        elif op == "nenhuma":
            print("portugues")
        elif op == "as duas":
            print("caiu")
    except EOFError:
        break
