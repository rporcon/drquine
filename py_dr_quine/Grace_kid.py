DEFINE_1 = 1
DEFINE_2 = 1

def FT(x):
    ''' code '''
    prog = 'DEFINE_1 = 1\nDEFINE_2 = 1\n\ndef FT(x):\n\t{}{}{} code {}{}{}\n\tprog = {};\n\tprint(prog.format(chr(39), chr(39), chr(39), chr(39), chr(39), chr(39), repr(prog)).expandtabs(4));\nFT(42);';
    print(prog.format(chr(39), chr(39), chr(39), chr(39), chr(39), chr(39), repr(prog)).expandtabs(4));
FT(42);
