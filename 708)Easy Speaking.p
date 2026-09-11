def solve():
    t = int(input())
    for _ in range(t):
        n = int(input())
        s = input()
        vowels = {'a', 'e', 'i', 'o', 'u'}
        
        is_hard = False
        # Check every contiguous sequence of 4 characters
        for i in range(n - 3):
            # Count how many of the 4 characters are consonants
            consonant_count = 0
            for j in range(4):
                if s[i + j] not in vowels:
                    consonant_count += 1
            
            # If all 4 are consonants, the word is hard to pronounce
            if consonant_count == 4:
                is_hard = True
                break
                
        if is_hard:
            print("Yes")
        else:
            print("No")

if __name__ == '__main__':
    solve()
