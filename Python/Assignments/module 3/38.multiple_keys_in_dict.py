slangwords = {
    'salty' : 'annoyed',
    'dop' : 'very good',
    'to clap back' : 'to respond'
}

print(slangwords.keys() >= {'salty', 'to clap back'})
print(slangwords.keys() >= {'dop', 'salty'})
print(slangwords.keys() >= {'to clap back', 'dop'})