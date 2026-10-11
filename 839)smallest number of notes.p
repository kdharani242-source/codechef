Consider a currency system in which there are notes of six denominations, namely, Rs. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100.
If the sum of Rs. N is input, write a program to compute smallest number of notes that will combine to give Rs. N.

# cook your dish here

T = int(input())

for _ in range(T):
    N = int(input())
    notes = [100, 50, 10, 5, 2, 1]
    count = 0

    for note in notes:
        count += N // note
        N %= note

    print(count)

Input
Output
3 
1200
500
242
12
5
7
