def add_numbers(a: float, b: float) -> float:
    """
    Retorna a soma entre dois números.
    Args:
    a (int or float): Primeiro número.
    b (int or float): Segundo número.
    Returns:
    int ou float: Soma de a e b.
    """
    return a+b

def is_even(number: int) -> bool:
    """
    Verifica se o número é par.
    Args:
        number (int): Número a ser analizado 
    Returns:
        `True` ou `False`: 
    """
    if (number%2 == 0):
        return True
    return False