let rows = 5;
while (rows > 0) {
    console.log(" ".repeat(rows) + "*".repeat(5 - (rows - 1)));
    rows -= 1;
}
