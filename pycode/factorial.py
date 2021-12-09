import time
def fact(n):
    factorial = 1
    i=2
    while i<=n:
        factorial*=i
        if n>=(i+1):
            factorial*=i+1    
            if n>=(i+2):
                factorial*=i+2
                if n>=(i+3):
                    factorial*=i+3
                    if n>=(i+4):
                        factorial*=i+4
                        if n>=(i+5):
                            factorial*=i+5
                            if n>=(i+6):
                                factorial*=i+6
                                if n>=(i+7):
                                    factorial*=i+7  
                                    if n>=(i+8):
                                        factorial*=i+8    
                                        if n>=(i+9):
                                           factorial*=i+9
        i+=10
    return factorial
def f(n):
    if n <= 1:
        return 1
    factorial = 1
    for i in range(2, n+1):
        factorial*=i
    return factorial
n = 1000
start_time = time.time()
print(f(n))
print("--- %.2f seconds ---" % (time.time() - start_time))
start_time = time.time()
print(fact(n))
print("--- %.2f seconds ---" % (time.time() - start_time))
