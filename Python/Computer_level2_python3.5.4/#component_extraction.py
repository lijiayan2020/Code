#component_extraction
def getHTMLlines(htmlpath):
    f = open(htmlpath,"r",encoding="utf-8")
    ls = f.readlines()
    f.close()
    return ls
def extractImageUrls(htmllist):
    urls=[]
    for line in htmllist:
        if 'img' in line:
            url = line.split('src=')[-1].split('"')[1]
            if 'http' in url:
                urls.append(url)
    return urls
def showResult(urls):
    count=0
    for url in urls:
        print('第{:2}个URl:{}'.format(count,url))
        count+=1
def saveResult(filepath,urls):
    f= open(filepath,"w")
    for url in urls:
        f.write(url+"\n")
    f.close()
def main():
    inputfile = '.html'
    outputfile = '-urls.txt'
    htmlLines=getHTMLlines(inputfile)
    imageUrls=extractImageUrls(htmlLines)
    showResult(imageUrls)
    saveResult(outputfile,imageUrls)
main()
