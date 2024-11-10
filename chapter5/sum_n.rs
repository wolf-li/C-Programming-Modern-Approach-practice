fn sum_n(num: u32) -> u32 {
    let mut sum : u32 = 0;
    for i in 1..=num {
        sum +=i;
    }
    sum
}

fn main(){
    let n = 200;
    println!("1 + 2 + ... + {}= {}",n,sum_n(n));
}