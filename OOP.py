f = open("889898.txt", "r", encoding="utf8")
w = open("output3.txt", "w", encoding="utf8")
ff=f.read()

ls=[]
ls[:0]=ff
act=0
stop=0
lim=len("StudeerSnel B.V., Keizersgracht 424, 1016 GC Amsterdam")
lim2=len("DownloadSaveShare")
print(lim)
for i in range(len(ls)):


    if ff[i:i+5]=="<body":
        act +=1
    if ff[i:i+5]=="</bod":
        act -=1
    if act<=0:
        ls[i]="$"

        
    if ls[i]=="<" and act>0:
        start=i
        if ff[i+1:i+4]=="/di":
            ls[i-1]=ls[i-1]+" NGẮT"
        continue    
    if ls[i]==">" and act>0:
        end=i
        
        for c in range(start,end+1):
            ls[c]="$"
            continue
    if ff[i:i+lim]=="StudeerSnel B.V., Keizersgracht 424, 1016 GC Amsterdam":
        stop=i
        print("họ")
        break

m=ls[:stop]


srt=""
for char in m:

    if char[-4:] =="NGẮT":
        if char[0]!="$":
            srt+=char[0]+"\n"
        else:
            srt+="\n"
        continue
    if char != "$":
        srt+=char
    if srt[-lim2:]=="DownloadSaveShare":
        srt=""
        print("in ;ai")

for i in range(len(srt)):
    if srt[i].isupper()==False and srt[i-1]=="\n":
        srt.replace(srt[i-1]," ",1)
        print("co")




 
 

bo=['This is a preview','Do you want full access?Go Premium and unlock all','Questions to our Experts New','Get Unlimited Downloads','Why is this page out of focus?','This is a Premium document. Become Premium to read the whole document','UploadShare your documents to unlock','Access to all documents','Free TrialGet 30 days of free Premium','Already Premium?Log in']
for cau in bo:
    srt=srt.replace(cau,'')

w.write(srt)
w.close()
f.close()