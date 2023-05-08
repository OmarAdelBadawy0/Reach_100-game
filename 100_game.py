'''
program 100 Game
Author: Omar Adel
Date: 22 Feb. 2022
Version: 1.0
'''

sum = 0      # The numbers are added alternately until the end of the game


def player1_tern():
    global sum

    try:
        num = int(input("\nPlayer1 tern:\n Choose number from 1 to 10: "))

        if 1 <= num <= 10:
            sum += num
            check_winner1()
    
        else:
            print("\nSoory!!!,Please choose number between 1 to 10: ")
            player1_tern()
    
    except ValueError:
        print("\nPlease enter a valid number !!!")
        player1_tern()
    
    
def player2_tern():
    global sum

    try:
        num = int(input("\nPlayer2 tern:\n Choose number from 1 to 10: "))
    
        if 1 <= num <= 10:
            sum += num
            check_winner2()
    
        else:
            print("\nSoory!!!,Please choose number between 1 to 10: ")
            player2_tern()
    
    except ValueError:
        print("\nPlease enter a valid number !!!")
        player2_tern()


def check_winner1():
    if sum == 100:
        print("\n Player1 WIN!!! \n")
        quit()
    elif sum > 100:
        print("\n DRAW!!! \n")
        quit()

def check_winner2():
    if sum == 100:
        print("\n Player2 WIN!!! \n")
        quit()
    elif sum > 100:
        print("\n DRAW!!! \n")
        quit()

# run the game
while True:
    player1_tern()
    print("Sum numbers = " + str(sum) + "\n")
    player2_tern()
    print("Sum numbers = " + str(sum) + "\n")