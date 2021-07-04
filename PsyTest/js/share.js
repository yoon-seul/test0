const url ='https:/cocktailpersonalities.netlify.app/'

function setShare(){
  const shareTitle ='칵테일 성격유형 결과';
  const shareDes = infoList[resultAlt].name;
  const shareURL = url + 'page/result-' + resultAlt + '.html';

  Kakao.Link.sendDefault({
    objectType: 'feed',
    content: {
      title: shareTitle
      description: shareDes,
      link: {
        mobileWebUrl: shareURL,
        webUrl: shareURL,
      }
    }

    buttons: [
      {
        title: '결과확인하기',
        link: {
          mobileWebUrl: shareURL,
          webUrl: shareURL,
        }
      }
    ]
  })
}
