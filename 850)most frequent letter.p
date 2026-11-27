# cook your dish here
s = input()

freq = [0] * 26

for ch in s.lower():
    if 'a' <= ch <= 'z':
        freq[ord(ch) - ord('a')] += 1

max_freq = max(freq)

for i in range(26):
    if freq[i] == max_freq:
        print(chr(i + ord('a')))
        break

Input
Hello, World! 123
output
l
