
t = int(input())

for _ in range(t):
    n, m = map(int, input().split())
    a = list(map(int, input().split()))

    a.sort()

    people = 0
    count = 0

    for x in a:
        new_people = people + x
        handshakes = new_people * (new_people - 1) // 2

        if handshakes <= m:
            people = new_people
            count += 1
        else:
            break

    print(count)


Input
Output
4
4 10
3 1 4 2
3 0
2 5 3
5 45
2 2 2 2 2
3 0
4 1 1
2
0
5
1
