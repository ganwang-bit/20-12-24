###30-3**2+9//3**2*10
###3*4**2/8%5
###2**2**3
##Python 3.9.1 (tags/v3.9.1:1e5d33e, Dec  7 2020, 17:08:21) [MSC v.1927 64 bit (AMD64)] on win32
##Type "help", "copyright", "credits" or "license()" for more information.
##>>> 
##================ RESTART: C:\Users\1\Desktop\python\20-12-24.py ================
##>>> 30-3**2+9//3**2*10
##3*4**2/8%5
##2**2**3
##
##
##SyntaxError: multiple statements found while compiling a single statement
##>>> 30-3**2+9//3**2*10
##
##31
##>>> 3*4**2/8%5
##1.0
##>>> 2**2**3
##256
##>>> print("{:3f}".format(3.1415))
##3.141500
##>>> print("{:10f}".format(3.1415))
##  3.141500
##>>> print("{:-10f}".format(3.1415))
##  3.141500
##>>> print("{:<10f}".format(3.1415))
##3.141500  
##>>> print("{:<10f}".format(3.1415926535))
##3.141593  
##>>> print("{:>10f}".format(3.1415926535))
##  3.141593
##>>> print("{:0>3}".format(3.12))
##3.12
##>>> print("{:0>3}".format(3.1))
##3.1
##>>> print("{:0>3}".format(3))
##003
##>>> print("{:0>3f}".format(3.1))
##3.100000
##>>> print("{:0<3f}".format(3.1))
##3.100000
##>>> print("{:0<3}".format(3.1))
##3.1
##>>> print("{:0<3}".format(3))
##300
##>>> print("{:0<3}".format(311))
##311
##>>> print("{:0<3}".format(3111))
##3111
##>>> print("{:0>3}".format(3111))
##3111
##>>> print("{:3}".format(3111))
##3111
##>>> print("{:<3}".format(3111))
##3111
##>>> print("{:f}".format(3.1415926535))
##3.141593
##>>> print("{:}".format(3.1415926535))
##3.1415926535
##>>> print("{}".format(3.1415926535))
##3.1415926535
##>>> print("{:>f}".format(3.1415926535))
##3.141593
##>>> 
##year=eval(input('杈撳叆涓涓骞翠唤'))
##if year%400==0 or (year%100!=0 and year%4==0):
##    print("{}鏄闂板勾".format(year))
##else:
##    print("{}涓嶆槸闂板勾".format(year))
##age=eval(input("璇疯緭鍏ヤ竴涓骞撮緞"))
##if 20<=age<=28:
##    print("杩欎釜浜哄勾榫勫湪20~28涔嬮棿")
##else:
##    print("杩欎釜浜哄勾榫勪笉鍦20~28涔嬮棿")
##>>> (2**4+7-3*4)/5
##2.2
##>>> (1+3**2)*(16%7)/7
##2.857142857142857
##>>>
#month=input("璇疯緭鍏ヤ竴涓鏈堜唤")
#if month=='1':
#    print("J")
#elif month=='2':
#    print("F")
#elif month=='3':
#    print("M")
#elif month=='4':
#    print("A")
#elif month=='5':
#    print("M")
#elif month=='6':
#    print("Jl")
#elif month=='7':
#    print("Ju")
#elif month=='8':
#    print("AI")
#elif month=='9':
#    print("S")
#elif month=='10':
#    print("O")
#elif month=="11":
#    print("N")
#else:
#    print("D")
