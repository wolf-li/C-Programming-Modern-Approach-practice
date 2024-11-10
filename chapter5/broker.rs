use std::io;

fn main(){
        let mut commission :f64 = 0.0;

        let mut input = String::new();

        io::stdin().read_line(&mut input).unwrap();
        
        // 使用 trim() 方法 移除 white_space \t \n
        let value_into_f64 = input.trim().parse::<f64>();

        match value_into_f64 {  
            Ok(value) => {  
                if value < 0.0 {
                    panic!("input wrong should grater 0 or equal 0!!!")
                } else if value < 2500.0 {  
                    commission = 30.0 + value * 0.017;  
                } else if value < 6250.0 {  
                    commission =  56.0 + value * 0.0066;  
                } else if value < 20000.0 {  
                    commission =  76.0 + value * 0.0034;  
                } else if value < 50000.0 {  
                    commission =  100.0 + value * 0.0034;  
                } else if value < 500000.0 {  
                    commission =  76.0 + value * 0.0034;  
                } else {
                    commission = 255.0 + value * 0.0009;
                }
            },  
            Err(err) => {  
                panic!("Failed to parse float: {}", err);  
            }  
        } 
        if commission < 39.0 {
            commission = 39.0;
        }
        println!("commission: {}\n", commission);
}