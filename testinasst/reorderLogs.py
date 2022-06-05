let_logs = []
    dig_logs = []
    
    for log in logs:
        
        tmp = log.split(" ")
        
        if tmp[1].isalpha():
            let_logs.append(tmp)
        else:
            dig_logs.append(tmp)
            
    
    let_logs.sort(key = lambda x: (x[1:],x[0]))
    
    
    return [" ".join(log) for log in let_logs] + [" ".join(log) for log in dig_logs]
