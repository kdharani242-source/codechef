Best of Two
Alice and Bob are playing a game. Each player rolls a standard six-sided die three times. The score of a player is calculated as the sum of the two highest rolls. The player with the higher score wins. If both players have the same score, the game ends in a tie.

Determine the winner of the game or if it is a tie.
# cook your dish here
# Read the number of test cases
t = int(input())

for _ in range(t):
    # Read the 6 integers representing Alice's and Bob's rolls
    a1, a2, a3, b1, b2, b3 = map(int, input().split())
    
    # Calculate scores: (sum of all 3) - (minimum of the 3)
    alice_score = (a1 + a2 + a3) - min(a1, a2, a3)
    bob_score = (b1 + b2 + b3) - min(b1, b2, b3)
    
    # Compare scores and print the result
    if alice_score > bob_score:
        print("Alice")
    elif bob_score > alice_score:
        print("Bob")
    else:
        print("Tie")
