main
{
	a=1
	b=2

	a<b
	jebxz G
		putsl "a less than b"
	G:
	
	if(a<b)
		putsl "a less than b"

	i=0
	H:
	i<10
	jebxz I 
		puts i
		i++
		jmp H
	I:
}