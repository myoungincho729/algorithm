from enum import Enum
from ex_queue import FixedQueue

menu = Enum('Menu', ['인큐','디큐','피크','검색','덤프','종료'])

def select_menu():
    s = [f'({m.value}){m.name}' for m in menu]
    while True:
        print(*s, sep=' ', end=' ')
        n = int(input(': '))
        if 1<= n <= len(menu):
            return menu(n)

q = FixedQueue(64)

while True:
    print()  