a = "a = %c%s%c%cbuf = a %c (34,a,34,10,37,10,34,34,34,34,10)%cfichier = open(%cGrace_kid.py%c,%cw%c)%cfichier.write(buf)"
buf = a % (34,a,34,10,37,10,34,34,34,34,10)
fichier = open("Grace_kid.py","w")
fichier.write(buf)