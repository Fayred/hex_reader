# Hex Reader with C language
Mini tool to read file in hex format.

### Demonstration :

**With plaintext reader :**
```
$ cat test_file.txt 
little with hex                                             
reader                                                                         
HELLO WORLD !!
```

**With hex_reader :**
```
$ gcc main.c -o hex_reader && ./hex_reader test_file.txt
6C 69 74 74 6C 65 20 77 69 74 68 20 68 65 78 0A |little with hex.|
72 65 61 64 65 72 0A 48 45 4C 4C 4F 20 57 4F 52 |reader.HELLO WOR|                                                               
4C 44 20 21 21 0A 41 20 42 20 43 20 44 20 45 20 |LD !!.A B C D E |
46 20 47 |F G|

```
