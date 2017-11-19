
CPSC 456 Project 2: Binder 
Names: David Poss, Gerard Cortes, Billy Dang

Part I:

Q1) Append .7z to result. Try opening the file using the 7-zip program. What happens? (Note: one way to open the file using the 
7-zip program is to right-click on result.7z and choose 7-zip -> Open archive. 
What happens? Are you able to extract and run the worm.bat file inside the archive?

-After we added the file extension .7z to result, we were not able to access the file via archives. 
7 zip and windows would throw an error. As a result, we were not able to either extract or run the
worm.bat file.

Q2) Repeat the above steps, but this time rename the file to result.gif extension.
Try opening the file. What happens?

-After adding the .gif extension, we were able to open the file and view the gif image. 
However, we still can't access the worm.bat file.

Q3) Explain what is happening. Do some research in order to find out what the above copy command
does. In your explanation be sure to explain the role of each argument in the above command. 
Also, be sure to explain how Windows handles files which leads to the above behavior. 
Include the answers to these questions in the README file you submit.

Code: copy /B mygifile.gif + myzipfile.7z result.

Sources
(1) https://superuser.com/questions/453245/what-exactly-happens-when-you-use-the-copy-b-command
(2) https://technet.microsoft.com/en-us/library/bb490886.aspx
(3) https://www.howtogeek.com/119365/how-to-hide-zip-files-inside-a-picture-without-any-extra-software/

-The copy command allows us to copy one or more files from one location to another. 
In this case, the /b flag of the copy command is treating the files we are merging as
binary where we would copy the contents of the files byte for byte. The first argument
takes the .gif image file. The second argument would be the .7z file that contains are 
malicious code. The last argument allows us to create a file that both contains our .gif image
and worm.bat. Overall, what is going is on is that we are merging the contents of our 
malicious code with the .gif image. Essentially, we are embedding malicious code that is packaged 
up within a .gif image. Now, as mentioned before there was an issue with accessing the file 
after we appended .7z to result. Most likely, Windows was not able to access it because it is
not in some recognizable format. "Binary files usually have headers, metadata, data structures, 
etc. that define the format of the file. If you do a binary copy, you will simply be copying 
all the bytes as is which ends up putting these structures in places that they should not be, 
so when you open them, the parsing function will have trouble and see what is essentially 
corrupt data. Some program will ignore the parts that don’t make sense and simply show 
what they can (which allows for stereography to work), but some will throw an error and 
complain that the file is corrupt." (1)

Q4) How can this technique be used for hiding malicious codes?

-Our guess is that this technique would help mask/conceal the malicious code in a way that prevents 
anti-malware programs from being able to detect it. Previously, we were not able to access the contents
of the file after appending .7z to result. Prior to that step, we had a file that we were 
able to access and look into. Clear as day we could clearly see our worm.bat file. By appending 
.gif to the file, we can fool users into believing that the file itself is just a harmless image but 
realistically malicious code that can do some darn good damage.


Q5) How robust is this technique in terms of avoiding detection by anti-virus tools? You may need to do 
some research.

Sources
https://www.pcworld.com/article/2105408/3/watch-out-for-photos-containing-malware.html


-In class, we have disussed ways to address such issues by checking the file size or converting a file
to another format and then back. Looking back, we realize that tacttics can change. As a result, not all 
anti-virus tools are perfect when it comes to detecting malware. What we did here was essentially embedd 
a compressed file into an image. This makes it difficult for anti-virus tools to detect malware in an image.
According to most sources online, there isn't much that can be done besides keeping your computer up to date
(anti-virus, OS, Applications, and etc.). Generally, the best way to combat these threats is by being 
vigilant of the things we find online and download.


Part II:


Usage:

Notes:



