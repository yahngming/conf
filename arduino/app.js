var ajax = require('ajax');
var Accel = require('ui/accel');
Accel.init();
Accel.on('tap', function(e) {
  ajax(
    {
      url:'http://192.168.1.177'
    }
  );
});
