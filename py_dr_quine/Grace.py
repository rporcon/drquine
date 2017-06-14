DEFINE_1 = 1
DEFINE_2 = 1

def FT(x):
    ''' code '''
    prog = 'DEFINE_1 = 1\nDEFINE_2 = 1\n\ndef FT(x):\n\t{}{}{} code {}{}{}\n\tprog = {};\n\tf = open({}Grace_kid.py{}, {}w+{});\n\tf.write(prog.format(chr(39), chr(39), chr(39), chr(39), chr(39), chr(39), repr(prog), chr(39), chr(39), chr(39), chr(39)).expandtabs(4));\nFT(42);\n';
    f = open('Grace_kid.py', 'w+');
    f.write(prog.format(chr(39), chr(39), chr(39), chr(39), chr(39), chr(39), repr(prog), chr(39), chr(39), chr(39), chr(39)).expandtabs(4));
FT(42);
