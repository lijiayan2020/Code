txt = '''
人生得意须尽欢，莫使金樽空对月。
天生我才必有用，千金散尽还复来。
'''
linewidth = 30 #预定输出宽度
def lineSplit(line):
    plist = [',','!','?','.','。','，','！','？']
    for p in plist:
        line = line.replace(p,'\n')
    return line.split('\n')
def linePrint(line):
    global linewidth
    print(line.center(linewidth,chr(12288)))
newlines = lineSplit(txt)
for newline in newlines:
    linePrint(newline)
