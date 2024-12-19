import * as fsp from "fs/promises";
import { join } from "path";


const pathToToph = join(process.cwd(), "toph");

fsp.writeFile(join(pathToToph, "README.md"), "This was added by husky");