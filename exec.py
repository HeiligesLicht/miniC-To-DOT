import sys, os
import glob

def execute(compiled_file, test_dir):
    comp = os.path.realpath(compiled_file)
    tests = os.path.realpath(test_dir)
    os.system("rm -rf {}".format(os.path.join(os.path.dirname(comp), "compiled")))
    os.mkdir(os.path.join(os.path.dirname(comp), "compiled"))
    for file in glob.glob(os.path.join(tests, "*.c")):
        os.system("{} < {} | dot -Tpng -o compiled/{}.png".format(comp, file, os.path.basename(file)))

if __name__ == "__main__":
    args = sys.argv[1:]
    assert len(args) == 2, "This script needs 2 arguments"
    execute(args[0], args[1])