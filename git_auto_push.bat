set /a x=1
git push --set-upstream origin main

:loop
	
	git add *.c >NUL 2>NUL
	git add *.txt >NUL 2>NUL
	git add *.bat >NUL 2>NUL
	git commit -m "auto push %x%"
	git push
	
	set /a x+=1
	echo Punct. Si de la capat...

	C:\Windows\System32\timeout.exe /t 150 /nobreak
	
goto loop
