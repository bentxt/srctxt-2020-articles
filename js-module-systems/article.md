% Javascript Modules CommonJS and ES6
% by ben@srctxt.com
% April 24 2020


EcmaScript Modules (ESM)
------------------

- from ES2005, Javascript supports modules 
- uses `export` keyword and `import`
- in node .mjs extenstions are supported

### lib.js:

```
export function hello () {
  console.log("hello world");
}
packagel.json
{
  "name":"es-modules",
   "type":"module"
}
```

### main.js:
```
import { hello } from './lib.js';

hello();
```

### running:

node main.js

### bundling to out.js: 

```
esbuild --bundle --outfile=out.js main.js
node out.js
```

CommonJS Modules (CJS)
----------------

- used in node
- uses `require` and `module.exports`

### lib.js:
```
function add (a, b) { return a + b }
function minus (a, b) { return a + b }

module.exports = { add, minus };
```


### main.js
 
```
const  { add, minus }  = require('./lib');

```

sources:
- https://www.sitepoint.com/understanding-module-exports-exports-node-js/
- https://2ality.com/2019/04/nodejs-esm-impl.html

---

id: bt-20200424gcoe








