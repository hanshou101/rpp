/*
RPP支持各种花括号风格，
也支持类似python的控制结构省略花括号，
注意表达式过长折行的时候不能省略括号
*/

main
{
	if(1||
		2)
		puts "true"
		
	if 1
		puts 2
		puts 3
		
	if 1 {
		puts 2
		puts 3
	}
	
	if(1) 
	{
		puts(2);
		puts(3);
	}
	
	if 1 {puts(2);}

	func(1,
		2)

	func(1,2
		)
}

func(int a,
	int b)
{
	puts a+b
}