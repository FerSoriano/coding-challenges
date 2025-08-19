

def bonAppetit(bill: list, k: list, b: int):
    """
    bill es la lista de la cuenta
    k es la lista de lo que Anna NO comio
    b es la lista de la cuenta separada
    """
    total = 0
    for e in bill:
        if k != e:
            total += e

    anna = total / 2

    if anna == b:
        return "Bon Appetit"

    return int(b - anna)


bill = [3, 10, 2, 9]
k = bill[1]
b = 7

print(bonAppetit(bill, k, b))
