hor = 0
aim = 0
ver = 0


with open("input.txt", "r") as file:
	for line in file:
		if line.split(" ")[0] == "forward":
			hor += int(line.split(" ")[1])
			ver += aim*int(line.split(" ")[1])
		if line.split(" ")[0] == "down":
			aim += int(line.split(" ")[1])
		if line.split(" ")[0] == "up":
			aim -= int(line.split(" ")[1])
			
print(hor)
print(ver)
print(hor*ver)