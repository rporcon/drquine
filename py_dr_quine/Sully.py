#!/usr/bin/python3
import os
def main():
    i = 5;
    if i <= 0:
        return ;
    if os.getenv('SULLY_PY') == '1':
        i = i - 1;
    f = open('Sully_' + str(i) + '.py', 'w+');
    prog = '#!/usr/bin/python3\nimport os\ndef main():\n\ti = {};\n\tif i <= 0:\n\t\treturn ;\n\tif os.getenv({}SULLY_PY{}) == {}1{}:\n\t\ti = i - 1;\n\tf = open({}Sully_{} + str(i) + {}.py{}, {}w+{});\n\tprog = {};\n\tf.write(prog.format(i, chr(39), chr(39), chr(39), chr(39), chr(39), chr(39), chr(39), chr(39), chr(39), chr(39), repr(prog), chr(39), chr(39), chr(39), chr(39), chr(10)).expandtabs(4));\n\tos.system({}export SULLY_PY=1 && /usr/bin/python3 Sully_{} + str(i) + {}.py{});\nmain();{}';
    f.write(prog.format(i, chr(39), chr(39), chr(39), chr(39), chr(39), chr(39), chr(39), chr(39), chr(39), chr(39), repr(prog), chr(39), chr(39), chr(39), chr(39), chr(10)).expandtabs(4));
    os.system('export SULLY_PY=1 && /usr/bin/python3 Sully_' + str(i) + '.py');
main();
