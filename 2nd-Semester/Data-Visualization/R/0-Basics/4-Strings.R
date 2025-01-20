"hello"
'hello'

str <- "Hello"
str # print the value of str

str <- "Lorem ipsum dolor sit amet,
consectetur adipiscing elit,
sed do eiusmod tempor incididunt
ut labore et dolore magna aliqua."


#################################################
str # print the value of str

cat(str) #to insert line breaks at the same position as in the code

#################################################
#String Length
nchar(str)

#################################################
#to check if a character or a sequence of characters
#are present in a string:
grepl("Hello", str)

#################################################
#Combine Two Strings
str1 <- "Hello"
str2 <- "World"

paste(str1, str2) 

##################################################
#Escape Characters
str <- "We are the so-called \"Vikings\", from the north."

str
cat(str) 
