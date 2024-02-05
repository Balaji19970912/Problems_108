let dd = 0;
let mm = 0;
let yy = 0;

switch (mm) {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    nextDateOne(dd, mm, yy);
    break;
  case 4:
  case 6:
  case 9:
  case 11:
    nextDateTwo(dd, mm, yy);
    break;
  case 2:
    nextDateThree(dd, mm, yy);
    break;
  default:
    console.log("Invalid value !");
}

function nextDateOne(dd, mm, yy) {
  let d = dd;
  let m = mm;
  let y = yy;

  if (d >= 1 && d <= 31) {
    d = d + 1;
    if (d > 31) {
      d = 1;
      m = m + 1;
      if (m > 12) {
        m = 1;
        y = y + 1;
      }
    }
    console.log(`Next date is : ${d}-${m}-${y}`);
  } else {
    console.log("Wrong number of date input has been given!");
  }
}

function nextDateTwo(dd, mm, yy) {
  let d = dd;
  let m = mm;
  let y = yy;
  if (d >= 1 && d <= 30) {
    d = d + 1;
    if (d > 30) {
      d = 1;
      m = m + 1;
    }
    console.log(`Next date is : ${d}-${m}-${y}`);
  } else {
    console.log("Wrong number of date input has been given!");
  }
}

function nextDateThree(dd, mm, yy) {
  let d = dd;
  let m = mm;
  let y = yy;

  if (y % 4 == 0) {
    if (y % 400 == 0) {
      if (d >= 1 && d <= 29) {
        d = d + 1;
        if (d > 29) {
          d = 1;
          m = m + 1;
        }
        console.log(`Next date is : ${d}-${m}-${y}`);
      } else {
        console.log("Wrong number of date input has been given!");
      }
    }
  } else {
    if (d >= 1 && d <= 28) {
      d = d + 1;
      if (d > 28) {
        d = 1;
        m = m + 1;
      }
      console.log(`Next date is : ${d}-${m}-${y}`);
    } else {
      console.log("Wrong number of date input has been given!");
    }
  }
}
// console.log(`Next date is : ${dd}-${mm}-${yy}`);
