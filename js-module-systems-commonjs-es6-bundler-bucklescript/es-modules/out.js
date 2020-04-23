(() => {
  let __defineProperty = Object.defineProperty;
  let __modules = {};
  let __require = (id, module) => {
    module = __modules[id];
    if (!module) {
      module = __modules[id] = {
        exports: {}
      };
      __commonjs[id](module.exports, module);
    }
    return module.exports;
  };
  let __import = (module, exports) => {
    module = __require(module);
    if (module && module.__esModule) {
      return module;
    }
    exports = Object(module);
    if (!("default" in exports)) {
      __defineProperty(exports, "default", {
        value: module,
        enumerable: true
      });
    }
    return exports;
  };
  let __export = (target, all) => {
    __defineProperty(target, "__esModule", {
      value: true
    });
    for (let name in all) {
      __defineProperty(target, name, {
        get: all[name],
        enumerable: true
      });
    }
  };
  let __commonjs;
  __commonjs = {
    1() {
      // ../../../Users/bkb/base/redir/js-module-systems-commonjs-es6-bundler_bxt0flquree_71a2aa.dec.txt/es-modules/lib.js
      function adder(i) {
        return i + 77;
      }

      // main.js
      console.log(adder(2));
    }
  };
  return __require(1);
})();
