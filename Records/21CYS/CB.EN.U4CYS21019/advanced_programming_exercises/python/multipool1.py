from multiprocessing import Pool
import time

def fibonacci_series(n):
   if n<= 1:
       return n
   else:
       return(fibonacci_series(n-1) + fibonacci_series(n-2))

if __name__ == '__main__':
   nterms = int(input("Enter number of terms:"))
   start =time.perf_counter()
   with Pool(processes=4) as pool:
       result = pool.map(fibonacci_series, range(nterms))
       print("Fibonacci Series: ")
       for n in result:
          print(n)
finish=time.perf_counter()
print(f'Finished in {round(finish-start,2)}second(s)')

