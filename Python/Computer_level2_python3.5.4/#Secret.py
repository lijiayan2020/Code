#Secret.py
ptxt=input("请输入密文：")
for p in ptxt:
    if 0x4E00 <= ord(p) <= 0x9FA5:
        print(chr(ord(p)-3),end="")
    elif 0x2013 <= ord(p) <= 0xFF1F:
        print(chr(ord(p)+3),end="")
    else:
        print(p,end="")
