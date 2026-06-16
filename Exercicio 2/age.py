def check_age(name: str, age: int) -> None:
    if age < 0:
        raise ValueError("A idade não pode ser negativa.")

    if age < 18:
        print(f"{name} é menor de idade")
    else:
        print(f"{name} é maior de idade")