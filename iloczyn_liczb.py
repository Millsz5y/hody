
#Program sumuje liczby parzyste w zakresie <0,100>
def main(args):
    
    iloczyn = 1
    for a in range(10):
        a = int(input("Podaj liczbę: "))
        iloczyn = iloczyn * a
    print(iloczyn)
 
 
 
 
 
 
 
 
 
    return 0











if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
