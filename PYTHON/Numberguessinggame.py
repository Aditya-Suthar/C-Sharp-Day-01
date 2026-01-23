import random

def main():
    secret = random.randint(1, 100)
    attempts = 0

    print("Guess the number between 1 and 100")

    while True:
        guess = int(input("Enter your guess: "))
        attempts += 1

        if guess < secret:
            print("Too low!")
        elif guess > secret:
            print("Too high!")
        else:
            print(f"Correct! You guessed it in {attempts} attempts.")
            break

if __name__ == "__main__":
    main()
