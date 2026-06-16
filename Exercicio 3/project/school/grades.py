def calculate_average(g1: float, g2: float) -> float:
    """
    Calcula a média das notas.
    Args:
        g1 (int ou float): Primeira nota.
        g2 (int ou float): Segunda nota.

    Returns: 
        int ou float: média simples das notas.

    Raise: 
        ValueError: caso b seja 0.
    """
    
    if(g1 < 0 or g2 < 0):
        raise ValueError ("A nota não pode ser negativa")
    return (g1+g2)/2

def divide_numbers(a: float, b: float) -> float:
    """
    Calcula a divisão entre dois números.

    Args:
        a (int ou float): Primeiro número.
        b (int ou float): Segundo número.

    Returns: 
        int ou float: divisão entre `a` e `b`.

    Raise: 
        ValueError: caso nota negativa.
    """
    try:
       div =  a/b
    except ZeroDivisionError:
        print("Error: You cannot divide by zero.")
    else:
        return div