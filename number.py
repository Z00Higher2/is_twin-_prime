# Write a program numbers.cpp that defines a function
# nextPrime(n)
# If n is divisible by d, the function should return true, otherwise return false.
# then print out the wehter the number is twin prime or not

    
def isPrime(n):
    if n <= 1:
        return True
 
    for i in range (2 , n):
        if (n % i == 0):
            return False
 
    return True

def isTwinPrime(n):

    while isPrime(n):
        if (isPrime(n - 2) or isPrime(n +2)):
            return True
        
        elif (not isPrime(n-2) and isPrime(n + 2)):
            return False
        
        elif (not isPrime(n)):
              return False
        
        else:
            return True
        
    return False

def main():

    num_1 = int(input("Enter the first number: "))

    print(isTwinPrime(num_1))

main()


