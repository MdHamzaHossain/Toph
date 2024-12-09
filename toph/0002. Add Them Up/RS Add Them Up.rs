use std::io;
fn main() {
	let mut line = String::new();
   std::io::stdin().read_line(&mut line).unwrap();
	let inputs: Vec<i32> = line.trim().split_whitespace().map(|e| e.parse().expect("Please type a number!") ).collect();
	let sum = inputs[0] + inputs[1];
	println!("{}", sum)
}