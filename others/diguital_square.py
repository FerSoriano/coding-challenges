"""
Obtener la suma de cada digito de un numero.
Repetir hasta tener un valor de 1 digito.
Ejemplo:
num = 1290
1 + 2 + 9 + 8 = 20
2 + 0 = 2
r = 2
"""


def sumaNumeros(numero: int) -> int:
    numero_str = str(numero)

    while True:
        suma = 0
        for numero in numero_str:
            suma += int(numero)

        numero_str = str(suma)

        if len(str(suma)) == 1:
            return suma


assert sumaNumeros(1298) == 2
assert sumaNumeros(7520) == 5
assert sumaNumeros(3418) == 7
assert sumaNumeros(8463) == 3
assert sumaNumeros(1158) == 6
