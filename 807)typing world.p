Nikhil is analyzing typing ergonomics for a new custom keyboard layout. He wants to measure the continuous strain placed on a typist's individual hands.You are given a string S representing a word Nikhil wants to type. You are also given a string 
L containing distinct characters, representing all the keys on the keyboard that must be pressed using the left hand. Any letter which is not present in L must be type r.
# cook your dish here
t = int(input())

for _ in range(t):
    n, m = map(int, input().split())
    s = input()
    l = set(input())

    max_count = 0
    count = 0
    previous_hand = None

    for ch in s:
        hand = 'L' if ch in l else 'R'

        if hand == previous_hand:
            count += 1
        else:
            count = 1
            previous_hand = hand

        max_count = max(max_count, count)

    print(max_count)

    Input
Output
3
8 14
codechef
qwertasdfgzxcv
5 1
abcde
a
3 26
xyz
abcdefghijklmnopqrstuvwxyz
3
4
3
