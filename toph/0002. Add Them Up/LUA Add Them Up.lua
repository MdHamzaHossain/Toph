local sum = 0
for a in string.gmatch(io.read(), "[^ ]+") do
    sum = sum+ (0+a)
end
io.write(sum)