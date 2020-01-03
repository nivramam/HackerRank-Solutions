def staircase(a):
    for i in range(1,a+1):
        print (a-i)*" "+i*"#"

if __name__ == '__main__':
    n = int(raw_input())
    
    staircase(n)
